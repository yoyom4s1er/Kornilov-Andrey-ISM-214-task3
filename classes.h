#pragma once
#include <string>
#include <iostream>

/**
 * @brief ����� ������
 *
 */

class car
{
	protected :

		/**
		* @brief �������� �����
		*
		*/
		std::string mark;

		/**
		* @brief ����� ���������
		*
		*/
		int cylinders;

		/**
		* @brief ��������
		*
		*/
		double power;

	public:

		/**
		* \brief ����������� �����������
		*/
		car(const car& other);

		/**
		* \brief ���������� �� ���������
		*/
		~car() = default;

		/**
		* @brief ����������� ������ ������� ������
		*
		* @param mark
		* @param cylinders
		* @param power
		*/
		car(const std::string mark, const int cylinders, const double power);

		/**
		 * @brief Set mark
		 *
		 * @param mark
		*/
		void set_mark(const std::string mark);

		/**
		 * @brief Set cylinders
		 *
		 * @param cylinders
		*/
		void set_cylinders(const int cylinders);

		/**
		 * @brief Set power
		 *
		 * @param power
		*/
		void set_power(const double power);

		/**
		 * @brief Get mark
		 *
		 * @param mark
		*/
		std::string get_mark() const;

		/**
		 * @brief Get cylinders
		 *
		 * @param cylinders
		*/
		int get_cylinders() const;

		/**
		 * @brief Get power
		 *
		 * @param power
		*/
		double get_power() const;
};

/**
 * @brief ����������� ����� ��������
 *
 */

class lorry : public car
{
	private :

		/**
		* @brief ����������������
		*
		*/
		double load_capacity;

	public :

		/**
		* \brief ����������� �����������
		*/
		lorry(const lorry& other);

		/**
		* \brief ���������� �� ���������
		*/
		~lorry() = default;

		/**
		* @brief ����������� ������ ������� ��������
		*
		* @param mark
		* @param cylinders
		* @param power
		* @load_capacity
		*/
		lorry(const std::string mark, const int cylinders, const double power, const double load_capacity);
		
		/**
		 * @brief Set load_capacity
		 *
		 * @param load_capacity
		*/
		void set_load_capacity(const double load_capacity);

		/**
		 * @brief Get load_capacity
		 *
		 * @param load_capacity
		*/
		double get_load_capacity()  const;

		/**
		* @brief ����� ��� ������ ������
		*/
		std::string to_string() const;
};

std::ostream& operator << (std::ostream& out, const lorry& lorry);